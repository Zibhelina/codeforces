/*
// version 1.0
// time: 61ms
// memory: 0Kb

use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line.");
    let n: usize = match input.trim().parse() {
        Ok(n) => n,
        Err(_) => {
            println!("Please enter a valid integer.");
            return;
        }
    };
    let mut x = 0;
    for _i in 0..n {
        let mut input = String::new();
        io::stdin().read_line(&mut input).expect("Failed to read line.");
        let statement: String = match input.trim().parse() {
            Ok(statement) => statement,
            Err(_) => {
                println!("Please enter a valid statement!");
                return;
            }
        };
        for ch in statement.bytes() {
            if ch == b'+' {
                x += 1;
                break;
            }
            else if ch == b'-' {
                x -= 1;
                break;
            }
        }
    }
    println!("{x}");
}
*/

use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).expect("Failed to read input");

    let mut iter = input.split_whitespace();
    let n: usize = iter.next().unwrap().parse().unwrap();

    let mut x = 0;
    for _ in 0..n {
        let statement = iter.next().unwrap();
        if statement.as_bytes()[1] == b'+' {
            x += 1;
        } else {
            x -= 1;
        }
    }

    println!("{}", x);
}
