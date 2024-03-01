fn main(){
	//Name vector
	let name = vec!["Mary","Sam","Sally","Greg","Ade","Mark","June","Ife"];

	//Age vector
	let age = vec![16,17,19,22,20,21,18,23];

	print!["\nAge allocation: \n"];

	//loop to iterate elemnents in a vector
	for i in 0..age.len(){
		//iteratinf through i on the vector
		print!("{} is {} years old \n",name[i],age[i]);
	}
}