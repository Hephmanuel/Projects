use std::io::Read;
use std::fs::File;

fn main(){
	let mut file = File::open("staff_tb.sql").unwrap();
	let mut contents = String::new();
	file.read_to_string(&mut contents).unwrap();
	print!("{}",contents);
}


