📝 **C++ Module 02 Assignment**

## Assignment Details

- **Assignment Name**: `cpp_module02`
- **Expected Files**:
  - 📄 `Warlock.cpp`, 📄 `Warlock.hpp`
  - 📄 `ASpell.cpp`, 📄 `ASpell.hpp`
  - 📄 `ATarget.cpp`, 📄 `ATarget.hpp`
  - 📄 `Fwoosh.cpp`, 📄 `Fwoosh.hpp`
  - 📄 `Dummy.cpp`, 📄 `Dummy.hpp`
  - 📄 `Fireball.cpp`, 📄 `Fireball.hpp`
  - 📄 `Polymorph.cpp`, 📄 `Polymorph.hpp`
  - 📄 `BrickWall.cpp`, 📄 `BrickWall.hpp`
  - 📄 `SpellBook.cpp`, 📄 `SpellBook.hpp`
  - 📄 `TargetGenerator.cpp`, 📄 `TargetGenerator.hpp`

## Assignment Description

🧙 **Warlock, SpellBook, and TargetGenerator Classes**

In the `Warlock`, `SpellBook`, and `TargetGenerator` classes, the use of the switch statement is forbidden.

📜 **Spells**

Create the following two spells, similar to `Fwoosh`:

1. `Fireball` (Name: "Fireball", Effects: "burnt to a crisp")
2. `Polymorph` (Name: "Polymorph", Effects: "turned into a critter")

🎯 **New Target Type**

Create a new target type, `BrickWall` (Type: "Inconspicuous Red-brick Wall").

📚 **SpellBook Class**

Create a `SpellBook` class in canonical form. It should not be copyable or instantiable by copy. The `SpellBook` class should have the following functions:

- `void learnSpell(ASpell*)`: This function COPIES a spell into the book.
- `void forgetSpell(const std::string&)`: This function deletes a spell from the book, but only if it exists.
- `ASpell* createSpell(const std.string&)`: This function receives a string corresponding to the name of a spell, creates it, and returns it.

Modify the `Warlock` class to include a spell book that is created with the `Warlock` and destroyed with the `Warlock`. Make sure that the `learnSpell` and `forgetSpell` functions of the `Warlock` call those of the spell book.

🎯 **TargetGenerator Class**

Create a `TargetGenerator` class in canonical form. It should not be copyable. The `TargetGenerator` class should have the following functions:

- `void learnTargetType(ATarget*)`: This function teaches the generator about a new target type.
- `void forgetTargetType(const std::string&)`: This function makes the generator forget a target type if it's known.
- `ATarget* createTarget(const std::string&)`: This function creates a target of the specified type.

📜 **Test Main and Expected Output**

Here's a sample test main function and its expected output:

```cpp
int main()
{
  Warlock richard("Richard", "foo");
  richard.setTitle("Hello, I'm Richard the Warlock!");
  BrickWall model1;

  Polymorph* polymorph = new Polymorph();
  TargetGenerator tarGen;

  tarGen.learnTargetType(&model1);
  richard.learnSpell(polymorph);

  Fireball* fireball = new Fireball();
  richard.learnSpell(fireball);

  ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

  richard.introduce();
  richard.launchSpell("Polymorph", *wall);
  richard.launchSpell("Fireball", *wall);
}
```

📜 **Expected Output**

When running the main function, the expected output is:

```
Richard: This looks like another boring day.
Richard: I am Richard, Hello, I'm Richard the Warlock!!
Inconspicuous Red-brick Wall has been turned into a critter!
Inconspicuous Red-brick Wall has been burnt to a crisp!
Richard: My job here is done!
```
