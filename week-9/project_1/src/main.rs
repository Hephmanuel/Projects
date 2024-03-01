use std::io::Write;
use std::fs::File;

fn main(){


	let lager = vec!["33 Export","Desperados","Goldberg","Gulder","Heineken","Star"];
	let stout = vec!["   Legend","   Turbo King","   Williams", ".",".","."];
	let non_alcoholic = vec!["   Maltina","  Amstel Malta","  Malta Gold","   Fayrouz",".","."];


    let mut file = std::fs::File::create("menu.txt").expect("Failed to create file");

	file.write_all("LAGER |  STOUT  |  NON_ALCOHOILC\n".as_bytes());
	file.write_all("\n".as_bytes());

    for i in 0..lager.len(){
	file.write_all(lager[i].as_bytes()).expect("Write failed");
    file.write_all("|".as_bytes()).expect("Write failed");
	file.write_all(stout[i].as_bytes()).expect("Write failed");
	file.write_all("|".as_bytes()).expect("Write failed");
	file.write_all(non_alcoholic[i].as_bytes()).expect("Write failed");
	file.write_all("|".as_bytes()).expect("Write failed");
	file.write_all("\n".as_bytes()).expect("Write failed");}

	println!("File created");

}