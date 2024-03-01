fn main(){
	//Using vec::new()
	let v : Vec::new();

	//printing the size of vector
	println!("\nThe length of the vec::new is: {}",v.len());

	//Usin macro
	let v = vec!["Grace","Effiong","Basil","Kareem","Susan"];

	//printing the size of the vector
	println!("\nThe length of vec macro is:{}",v.len());
}