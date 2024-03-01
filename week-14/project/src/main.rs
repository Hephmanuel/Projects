use std::io;
use std::fs::File;
use std::io::Read;

//GENERAL FORMAT
fn main(){
	let mut input1 = String::new();
	println!("I am a/an:\n Administrator (Enter a)\n Project Manager (Enter p)\n Employee (Enter e)\nCustomer(Enter c)\n Vendor (Enter v)");
	io::stdin().read_line(&mut input1).expect("Failed to read input");
	let status:char = input1.trim().parse().expect("Invalid input");

	if status == 'a'{
		administrator();
	}
	if status == 'P'{
		project_manager();
	}
	if status == 'e'{
		employee();
	}
	if status == 'c'{
		customer();
	}

	if status == 'v'{
		vendor();

	}

}


//FUNCTIONS
fn administrator(){
	let mut file = File::open("globacom_dbase.sql").expect("Failed to open globacom_dbase.sql");
let mut contents = String::new();
file.read_to_string(&mut contents).expect("Failed to read globacom_dbase.sql");
print!("{}",contents);

}
//manager function
fn project_manager(){
	let mut file = File::open("project_tb.sql").unwrap();
	let mut contents = String::new();
	file.read_to_string(&mut contents).unwrap();
	print!("{}",contents);
}
//employess function
fn employee(){
	let mut file = File::open("staff_tb.sql").unwrap();
	let mut contents = String::new();
	file.read_to_string(&mut contents).unwrap();
	print!("{}",contents);
}
//customer function
fn customer(){
	let mut file = File::open("customers_tb.sql").unwrap();
	let mut contents = String::new();
	file.read_to_string(&mut contents).unwrap();
	print!("{}",contents);
}
//vendor function
fn vendor(){
	let mut file = File::open("dataplans_tb.sql").unwrap();
	let mut contents = String::new();
	file.read_to_string(&mut contents).unwrap();
	print!("{}",contents);
}
