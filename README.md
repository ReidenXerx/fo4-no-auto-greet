# No Auto-Greet

Fallout 4. NPCs stop opening a conversation on their own when you walk past them.

In the vanilla game a trader, a guard or a settler starts talking to you, camera and all, the moment
you come within about 2.5 m where they can see you. With this plugin nobody does. You talk to people
when you press Talk, and every greeting they have still plays then.

## How

One game setting, `fAIMinGreetingDistance`, from 175 to 0: the distance inside which an NPC may open
a conversation by themselves. In the vanilla masters 4,790 of 5,993 greeting lines can do that (about
2,100 of them are traders'). Scripted scenes where someone has to stop you use separate forced greets
and are left alone.

- One light plugin (ESL): no load-order slot, no scripts, no new records.
- Works with NPCs from other mods too, because the setting is global.
- Any Fallout 4 version: the setting is the same on 1.10.163 and the Anniversary Edition.
- Safe to add or remove mid-game.

## Build

```
python tools/make_esp.py build/NoAutoGreet.esp
pwsh scripts/make-release.ps1
```

## Licence

MIT, see `LICENSE`.
