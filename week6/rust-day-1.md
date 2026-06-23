# Day 1

## Morning

### 5 - Types and Variables 

#### 5.2 Hello World

- Rust follows C Syntax
- Rust shoports uncode
- `println!` is a macro
- **macros** are used in sutuations where you have a variable number of arguments. *no function overloading*

````rust
// Copyright 2024 Google LLC
// SPDX-License-Identifier: Apache-2.0

fn main() {
    println!("Hello 🌍!");
}
````

#### 5.2 Variables

- rust provides type safety with statitc typing
- rust supports type inference making it optional to explicitly declaere the type
- variables are immutable by default, you explicitly make variables mutable by adding `mut`
- If you make a variable mutable but dont change its value, the compiler will throw a warning

````rust
// Copyright 2023 Google LLC
// SPDX-License-Identifier: Apache-2.0

fn main() {
    let x: i32 = 10;
    println!("x: {x}");
    // x = 20;
    // println!("x: {x}");
}
````

#### 5.3 Values

- `isize` and `usize` are the width of a pointer
- `char` is 32 bits wide
- `bool| is 8 bits wide
- supports signed and unsigned integers
