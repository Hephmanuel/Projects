use std::io::Write;
use std::fs::File;
use std::io::Read;

fn main(){

    let name = vec!["Oluchi Mordi", " Adams Aliyu", "Shania Bolade", " Adekunle Gold", " Blanca Edemoh"];
    let m_number = vec!["      ACC10211111","      ECO101110101","       CSC10328828","      EEE11020202","     MEE10202001"];
    let dep = vec!["       Accounting","      Economics","      Computer","     Electrical","       Mechanical"];
    let level = vec!["    300","    100","        200","    200","      100"];

    let mut file = File::create("PAU SIMS.txt").expect("Failed to create file");
    file.write_all("STUDENT NAME       MATRIC NUMBER        DEPARTMENT            LEVEL".as_bytes()).expect("write failed");
    file.write_all("\n".as_bytes()).expect("Write failed");
   for i in 0..dep.len(){
    file.write_all(name[i].as_bytes()).expect("Write failed");
    file.write_all("|".as_bytes()).expect("Write failed");
    file.write_all(m_number[i].as_bytes()).expect("Write failed");
    file.write_all("|".as_bytes()).expect("Write failed");
    file.write_all(dep[i].as_bytes()).expect("Write failed");
    file.write_all("|".as_bytes()).expect("Write failed");
    file.write_all(level[i].as_bytes()).expect("Write failed");
    file.write_all("|".as_bytes()).expect("Write failed");
    file.write_all("\n".as_bytes()).expect("Write failed");
}

let mut file = File::open("PAU SIMS.txt").unwrap();
let mut info = String::new();
file.read_to_string(&mut info).unwrap();
print!("{}", info);

println!("File created");
}