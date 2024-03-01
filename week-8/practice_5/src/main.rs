use std::io;

fn main() {
//Create an empty vector "City
let mut city: Vec<String> = Vec::new();
//Print city vectoe
println!("The city vector has element {}",city.len());
//Push new elemenst into
let mut input1 = String::new();
println!("How many cities do you want to enter");
io::stdin().read_line(&mut input1).expect("Invalid input");
let city_num :u32 = input1.trim().parse().expect("Invalid input");

for count in 0..city_num{
	let mut input2 = String::new();
	println!("Enter city {}", count+1);
	io::stdin().read_line(&mut input2).expect("Failed to read input");
	let new_city:String = input2.trim().parse().expect("Invalid input");
	
	city.push(new_city);

}
print!("Your preffered cities are:\n");
let mut count=1;
//loop to iterate elements in vector 
for i in city{
	//iterating thrpugh i on the vector 
	println!("{} {}",count,i);
	count =+1;
}
}