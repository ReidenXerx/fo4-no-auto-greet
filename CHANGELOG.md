# Changelog

## 0.2.0 (2026-09-28)

- **Traders only.** Traders no longer open a conversation or call out a hello on their own; they
  wait until you press Talk. Everyone else, companions and quest NPCs included, is back to the
  vanilla game. A trader is anyone in a faction with a merchant container (108 in the vanilla game
  and DLC), settlement shopkeepers and other mods' traders included; anyone who is or has been your
  companion is left alone.
- **Now an F4SE plugin**, one DLL for 1.10.163 and the Anniversary Edition. Needs F4SE and
  [Runtime Database](https://www.nexusmods.com/fallout4/mods/108394). No plugin file any more:
  remove `NoAutoGreet.esp` if you had 0.1.0.

## 0.1.0 (2026-09-28)

- NPCs no longer start conversations on their own: `fAIMinGreetingDistance` 175 -> 0 in a light
  plugin. Withdrawn: it also silenced companions and story NPCs whose moments start that way.
