fn collatz_length(n: i32) -> u32 {
    if n > 1 {
        if n % 2 == 0 {
            // n is even
            1 + collatz_length(n / 2)
        } else {
            // n is odd
            1 + collatz_length(3 * n + 1)
        }
    } else if n == 1 {
        1
    } else {
        println!("Time to write a proof");
        0
    }
}

fn main() {
    println!("Length: {}", collatz_length(11));
}
