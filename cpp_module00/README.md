📝 **C++ Module 00 Assignment**

## Assignment Details

- **Assignment Name**: `cpp_module00`
- **Expected Files**: 📄 `Warlock.cpp`, 📄 `Warlock.hpp`

## Assignment Description

Create a C++ `Warlock` class that adheres to Coplien's form, with specific attributes, functions, and behavior.

🔐 **Private Attributes**

The `Warlock` class should include the following private attributes:

- `name` (🔒 string)
- `title` (🔒 string)

Since these attributes are private, you should implement the following getter functions:

- `getName()`: Returns a reference to a constant string.
- `getTitle()`: Returns a reference to a constant string.

Both of these functions can be invoked on a constant `Warlock` object.

Additionally, you need to implement a setter function:

- `setTitle(const std::string& newTitle)`: Takes a reference to a constant string and returns void.

🏗️ **Constructor**

In addition to adhering to Coplien's form, the `Warlock` class should have a constructor that takes the `name` and `title` in that order. It should be impossible to copy a `Warlock`, instantiate a `Warlock` by copying, or instantiate a `Warlock` without providing both a name and a title.

**Example**:

```cpp
Warlock bob;                            // Does not compile
Warlock bob("Bob", "the magnificent");  // Compiles
Warlock jim("Jim", "the nauseating");   // Compiles
bob = jim;                              // Does not compile
Warlock jack(jim);                      // Does not compile
```

Upon creation, the `Warlock` should declare:

```
<NAME>: This looks like another boring day.
```

Make sure to replace placeholders like `<NAME>` and `<TITLE>` with the appropriate values, without the `<` and `>`.

When the `Warlock` meets its end, it should utter:

```
<NAME>: My job here is done!
```

🎭 **Introduction Function**

The `Warlock` must be capable of introducing itself with grandiosity. Create the following function:

- `void introduce() const`: This function should display:

```
<NAME>: I am <NAME>, <TITLE>!
```

📜 **Example Main Function**

Here's an example of a test main function and its associated output:

```cpp
int main()
{
  Warlock const richard("Richard", "Mistress of Magma");
  richard.introduce();
  std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;

  Warlock* jack = new Warlock("Jack", "the Long");
  jack->introduce();
  jack->setTitle("the Mighty");
  jack->introduce();

  delete jack;

  return (0);
}
```

📜 **Expected Output**

When running the main function, the expected output is:

```
Richard: This looks like another boring day.
Richard: I am Richard, Mistress of Magma!
Richard - Mistress of Magma
Jack: This looks like another boring day.
Jack: I am Jack, the Long!
Jack: I am Jack, the Mighty!
Jack: My job here is done!
Richard: My job here is done!
```
