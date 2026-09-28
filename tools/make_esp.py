"""Builds NoAutoGreet.esp: one game setting, nothing else.

    python tools/make_esp.py [out.esp]

WHY ONE SETTING. An NPC starts a conversation with the player by itself when a
greeting line of theirs lacks "requires player activation" and the player comes
within fAIMinGreetingDistance (vanilla 175 units, about 2.5 m) where they can see
them. In the vanilla masters 4,790 of 5,993 greeting lines can do that; about
2,100 belong to NPCs in a vendor faction. Setting the distance to 0 means nobody
is ever close enough, so no NPC opens a conversation on their own, and every
greeting still plays when the player presses Talk. Scripted forced greets run
through ForceGreet packages and their own timer (fAIForceGreetingTimer).

The override keeps the master's form id, so the plugin adds no records and is
flagged light (ESL): it takes no load-order slot.
"""
import pathlib
import struct
import sys

AUTHOR = 'No Auto-Greet'
MASTER = 'Fallout4.esm'
TES4_LIGHT = 0x200          # the TES4 record flag that makes a plugin light (ESL)

# Fallout4.esm GMST fAIMinGreetingDistance: form id and form version as the master
# stores them (read from Fallout4.esm 1.10.163; the record is the same on AE).
GMST_FORMID = 0x0014DD5B
GMST_FORM_VERSION = 0x6D
GMST_EDID = 'fAIMinGreetingDistance'
DISTANCE = 0.0              # vanilla 175.0


def field(sig, data):
    return sig.encode('ascii') + struct.pack('<H', len(data)) + data


def record(sig, form_id, fields_blob, flags=0, form_version=131):
    # 24-byte record header: sig, dataSize, flags, formID, VCS1, formVersion, VCS2
    return (sig.encode('ascii')
            + struct.pack('<III', len(fields_blob), flags, form_id)
            + struct.pack('<IHH', 0, form_version, 0)
            + fields_blob)


def group(label, records_blob):
    return (b'GRUP' + struct.pack('<I', 24 + len(records_blob)) + label.encode('ascii')
            + struct.pack('<I', 0) + struct.pack('<IHH', 0, 0, 0) + records_blob)


def build():
    header = field('HEDR', struct.pack('<fiI', 1.0, 1, 0x800))
    header += field('CNAM', AUTHOR.encode('ascii') + b'\0')
    header += field('MAST', MASTER.encode('ascii') + b'\0')
    header += field('DATA', struct.pack('<Q', 0))
    gmst = record('GMST', GMST_FORMID,
                  field('EDID', GMST_EDID.encode('ascii') + b'\0')
                  + field('DATA', struct.pack('<f', DISTANCE)),
                  form_version=GMST_FORM_VERSION)
    return record('TES4', 0, header, flags=TES4_LIGHT) + group('GMST', gmst)


def main():
    out = pathlib.Path(sys.argv[1] if len(sys.argv) > 1 else 'build/NoAutoGreet.esp')
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(build())
    print(f'{out}: {out.stat().st_size} bytes, light, {GMST_EDID} = {DISTANCE} (vanilla 175)')


if __name__ == '__main__':
    main()
