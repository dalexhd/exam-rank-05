📝 **C++ Module 01 Assignment**

📌 **Assignment Details**

- **Assignment Name**: `cpp_module01`
- **Expected Files**:
  - 📄 `Warlock.cpp`, `Warlock.hpp`
  - 📄 `ASpell.cpp`, `ASpell.hpp`
  - 📄 `ATarget.cpp`, `ATarget.hpp`
  - 📄 `Fwoosh.cpp`, `Fwoosh.hpp`
  - 📄 `Dummy.cpp`, `Dummy.hpp`

📌 **Assignment Description**

🔶 **Warlock Class**

In the `Warlock` class, the use of the switch statement is forbidden.

🔷 **Abstract Class ASpell**

Create an abstract class called `ASpell` in Coplien's form. It should include the following protected attributes:

- `name` (🔒 string)
- `effects` (🔒 string)

Both attributes should have getter functions: `getName()` and `getEffects()`, which return strings. Also, add a `clone()` pure method that returns a pointer to `ASpell`. All these functions should be callable on a constant object.

`ASpell` should have a constructor that takes its `name` and `effects` in that order.

🔷 **Abstract Class ATarget**

Create an abstract class called `ATarget` in Coplien's form. It should have a `type` attribute (string) and an associated getter, `getType()`, which returns a reference to a constant string. Similar to `ASpell`, it should also have a `clone()` pure method. All these functions should be callable on a constant object.

Add a function `getHitBySpell(const ASpell& spell)` to `ATarget` that displays:

```
<TYPE> has been <EFFECTS>!
```

Where `<TYPE>` is the `ATarget`'s type and `<EFFECTS>` is the result of the `ASpell`'s `getEffects()` function.

🔷 **ASpell Member Function**

Add to the `ASpell` class a `launch(const ATarget& target)` function that simply calls the `getHitBySpell()` method of the passed object, passing the current instance as a parameter.

🔶 **Concrete ASpell Implementation (Fwoosh)**

Create a concrete implementation of `ASpell` called `Fwoosh`. The default constructor should set the `name` to "Fwoosh" and the `effects` to "fwooshed". Implement the `clone()` method. In the case of `Fwoosh`, it should return a pointer to a new `Fwoosh` object.

🔶 **Concrete ATarget (Dummy)**

Create a concrete implementation of `ATarget` called `Dummy`. Its `type` should be "Target Practice Dummy". Implement its `clone()` method.

🔷 **Warlock Class Functions**

Add the following member functions to the `Warlock` class:

- `learnSpell(ASpell* spell)`: Takes a pointer to an `ASpell` and makes the `Warlock` learn the spell.
- `forgetSpell(const std::string& spellName)`: Takes a string corresponding to a spell's name and makes the `Warlock` forget it. If it's not a known spell, do nothing.
- `launchSpell(const std::string& spellName, ATarget& target)`: Takes a string (spell name) and a reference to an `ATarget`, and launches the spell on the selected target. If it's not a known spell, do nothing.

You will need a new attribute to store the spells that your `Warlock` knows. Several types are suitable for this purpose, so choose the one that best fits your implementation.

📌 **Test Main and Expected Output**

Here's a possible test main function and its expected output:

```cpp
int main()
{
  Warlock richard("Richard", "the Titled");

  Dummy bob;
  Fwoosh* fwoosh = new Fwoosh();

  richard.learnSpell(fwoosh);

  richard.introduce();
  richard.launchSpell("Fwoosh", bob);

  richard.forgetSpell("Fwoosh");
  richard.launchSpell("Fwoosh", bob);
}
```

📌 **Expected Output**

When running the main function, the expected output is:

```
Richard: This looks like another boring day.
Richard: I am Richard, the Titled!
Target Practice Dummy has been fwooshed!
Richard: My job here is done!
```
