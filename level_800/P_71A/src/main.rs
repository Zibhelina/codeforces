use std::io;

fn main() {
    // [x] - get n as input
    // [x] - get array of n strings
    // [x] - call abbreviate_word_list
    // [x] - display new list
    let n: usize;
    loop {
        let mut input = String::new();
        match io::stdin().read_line(&mut input) {
            Ok(_) => {
                match input.trim().parse::<usize>() {
                    Ok(input) => {
                        n = input;
                        break;
                    }
                    Err(_) => {
                        println!("Invalid input. Please enter a valid u32 integer.");
                    }
                }
            }
            Err(error) => {
                println!("Error reading input: {}", error);
                return;
            }
        }
    }
    let mut words = vec![String::new(); n];
    for word in &mut words {
        let mut input = String::new();
        match io::stdin().read_line(&mut input) {
            Ok(_) => {
                input = input.trim().to_string();
                word.push_str(&input);
            }
            Err(_) => {
                println!("Failed to read input")
            }
        }
    }
    abbreviate_word_list(&mut words);
    for word in words {
        println!("{word}");
    }
}

fn abbreviate_word_list(words: &mut Vec<String>) {
    for word in words {
        if word.len() > 10 {
            let mut abbreviated_word = String::new();
            abbreviated_word.push(word.chars().next().unwrap());
            abbreviated_word.push_str(&(word.len() - 2).to_string());
            abbreviated_word.push(word.chars().last().unwrap());
            *word = abbreviated_word;
        }
    }
}