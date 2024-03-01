fn main(){
	//an array of numners
	let numbers = [1,2,3,4,5];
	println!("Original array = {:?}",numbers);

	//create a slice of second and third element
	let slice1 = &numbers[1..3];
	println!("2nd and 3rd elemenys sliced = {:?}",slice1);

	//omit the start index
	let slice2 = &numbers[..3];
	//This means the slice index starts from 0 and goes up to index 3
    println!("Index 0 to three sliced = {:?}",slice2);

    //omit the end index
    let slice3 = &numbers[2..];
    //This means the slice index starts from 2 and goes up to index 5
    println!("index 2 to index 4 sliced = {:?}",slice3);

    //omit the start index and the end index
    //refernce the whole array
    let slice4 = &numbers[..];
    //This means the slice starts from index 0 and goes up to index 5(exlclusive)
    println!("Index 0 to index 4 sliced = {:?}", slice4);
}