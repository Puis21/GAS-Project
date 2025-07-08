# Top-Down RPG Project Setup

---

## Key Features

### Core Gameplay Systems

- **Character Class Hierarchy**  
  Uses proper Object-Oriented Programming (OOP) principles and inheritance to create a flexible character class structure.

- **Gameplay Ability System (GAS)**  
  Includes custom Ability System Components, Attribute Sets, Gameplay Effects, and Gameplay Tags.  
  Supports attribute replication for multiplayer.

- **Player Stats with Attributes**  
  Primary attributes affect gameplay directly:  
  - Strength (physical damage)  
  - Intelligence (magical damage)  
  - Resilience (armor & penetration)  
  - Vigor (max health)  

  Secondary attributes derive from primary ones:  
  - Armor, Armor Penetration, Block Chance, Critical Hit Chance, Critical Hit Damage, Critical Hit Resistance, Health and Mana Regeneration, Max Health, Max Mana.  

- **Vital Attributes**  
  Health and Mana values depend on primary and secondary attributes.

- **Gameplay Effects**  
  Apply attribute changes, buffs, debuffs, and status effects.

- **Gameplay Tags**  
  Identify character states, abilities, classes, and game logic.

---

### UI and Player Interaction

- **Complex Modular UI Design**  
  Efficient RPG UI using MVC and MVVM patterns, including Unreal’s ViewModel feature for scalability.

- **Attribute and Spell Menus**  
  Menus for upgrading attributes, selecting spells, unlocking levels, and managing spell trees.

- **Ability Input System**  
  Dynamic assignment of abilities to inputs (e.g., binding FireBolt to the “1” key).

- **Visual Combat Feedback**  
  Floating damage texts with color coding for critical hits, blocks, knockbacks, stuns, and elemental debuffs.

---

### Combat and Abilities

- **RPG Combat System**  
  Multiple damage types, resistances, and debuffs integrated into a combat pipeline.

- **Ability Cost and Cooldowns**  
  Abilities consume mana and have cooldown timers.

- **Varied Abilities**  
  Offensive spells like FireBolt, Electrocute, Arcane Shards, FireBlast, and passive spells that remain active when equipped.

- **Experience and Leveling**  
  XP awarded for enemy kills; level-ups grant attribute points, spell points, and restore health/mana.

---

### Enemy AI and Behavior

- **Enemy Types**  
  Ranger, Warrior, and Elementalist enemies with unique behaviors.

- **Behavior Trees and EQS**  
  Enemy AI controlled through Behavior Trees and Environment Query System.

- **Advanced Enemy Actions**  
  Includes spell casting and minion summoning.

---

### Additional Features

- **Camera System**  
  Geometry fades when obstructing the camera in the top-down view.

- **Progress Saving and Level Transitions**  
  Reliable saving of player progress and smooth level transitions.

- **Advanced Unreal Engine Techniques**  
  Custom Async Tasks, Ability Tasks, Blueprint Function Libraries, Asset Managers, Singletons (used selectively), custom Gameplay Effect Contexts, and network serialization.

- **C++ and Blueprint Integration**  
  Balanced 50/50 use of C++ and Blueprints with best practices on dividing functionality.

- **Clean Code Architecture**  
  Adheres to SOLID principles and AAA-level coding standards for modularity, maintainability, performance, and scalability.

---

## Project Structure Overview

- Character classes and hierarchy implemented in C++  
- Gameplay Abilities, Effects, and Attributes modularized for reuse  
- UI designed for scalability and modularity  
- Enemy AI implemented with Behavior Trees and EQS  
- Proper networking and replication for multiplayer support
