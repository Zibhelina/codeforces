use std::io;

fn main() {
    let weight;
    loop {
        let mut input = String::new();
        match io::stdin().read_line(&mut input) {
            Ok(_) => {
                match input.trim().parse::<u32>() {
                    Ok(n) => {
                        weight = n;
                        break;
                    }
                    Err(_) => {
                        println!("Invalid input. Please Enter a valid u32 integer.");
                    }
                }
            }
            Err(error) => {
                println!("Error reading input: {}", error);
                return;
            }
        }
    }
    let res: bool = is_evenly_divisible(weight);
    if res {
        println!("YES");
    } else {
        println!("NO");
    }
}

fn is_evenly_divisible(weight: u32) -> bool {
    if weight % 4 == 0 {
        return true;
    }
    for i in 1..(weight/2+1) {
        if (i % 2 == 0) && ((weight - i) % 2 == 0) {
            return true;
        }
    }
    return false;
}
