#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// Structure to represent a quiz question
struct Question {
    std::string question;
    std::vector<std::string> options;

};

// Function to authenticate the user
bool authenticateUser(const string &myUsername, const string &myPassword) {
    ifstream userFile("User details.txt");

    if (!userFile.is_open()) {
        cerr << "Error opening user details file!" << endl;
        return false;
    }

    string username, password;

    while (userFile >> username >> password) {
           cout << "Read from file: " << username << " " << password << endl;
        if (username == myUsername && password == myPassword) {
            userFile.close();
            return true; // Authentication successful
        }
    }
    

    userFile.close();
    return false; // Authentication failed
}

// Function to read questions from a file
vector<Question> readQuestionsFromFile(const string &filename) {
    ifstream inputFile(filename);

    if (!inputFile.is_open()) {
        std::cerr << "Error opening file '" << filename << "'!" << std::endl;
        exit(1);
    }

    vector<Question> questions;
    Question currentQuestion;
    string line;

    while (std::getline(inputFile, line)) {
        if (line.empty()) {
            // Empty line indicates the end of a question block
            if (!currentQuestion.question.empty()) {
                questions.push_back(currentQuestion);
                currentQuestion = Question(); // Reset for the next question
            }
        } else {
            // Assume all lines are part of the question or options
            if (line.front() == 'A' || line.front() == 'B' || line.front() == 'C' || line.front() == 'D') {
                // Line starts with a letter, so it's an option
                currentQuestion.options.push_back(line);

            } else {
                // Line is part of the question
                currentQuestion.question += line + "\n";
            }
        }
    }

    // Check if there's an unfinished question after reaching the end of the file
    if (!currentQuestion.question.empty()) {
        questions.push_back(currentQuestion);
    }

    inputFile.close();

    return questions;
}

int main() {
    string myUsername, myPassword;

    while (true) {
// Get user's credentials
cout << "Enter your username: ";
std::getline(cin, myUsername); // Read the entire line

cout << "Enter your password: ";
std::getline(cin, myPassword); // Read the entire line


        // Authenticate the user
        if (authenticateUser(myUsername, myPassword)) {
            cout << "Authentication successful. You can proceed.\n" << endl;
            cout << "Welcome to the CBT Test. There are 5 questions"<< endl;
            // Read questions from file
            vector<Question> questions = readQuestionsFromFile("questions.txt");

            std::vector<char> userAnswers(questions.size(), ' '); // Initialize with spaces
            int currentQuestionIndex = 0;


            bool continueQuiz = true;

            while (continueQuiz) {
                const Question &q = questions[currentQuestionIndex];

                std::cout << "Question: " << q.question << std::endl;
                for (const auto &option : q.options) {
                    std::cout << option << std::endl;
                }

                // Get user input for the answer
                std::string userAnswer;
                std::cout << "Your answer (A, B, C, or D), P for Previous, N for Next, S for Submit: ";
                std::cin >> userAnswer;

                if (userAnswer == "S" || userAnswer == "s") {
                    // User chose to submit
                    continueQuiz = false;
                } else if (userAnswer == "P" || userAnswer == "p" && currentQuestionIndex > 0) {
                    // Move to the previous question
                    currentQuestionIndex--;
                } else if (userAnswer == "N" || userAnswer == "n" && currentQuestionIndex < questions.size() - 1) {
                    // Move to the next question
                    currentQuestionIndex++;
                } else if (userAnswer == "A" || userAnswer == "B" || userAnswer == "C" || userAnswer == "D" ||
                           userAnswer == "a" || userAnswer == "b" || userAnswer == "c" || userAnswer == "d") {
                    // Store the user's answer
                    userAnswers[currentQuestionIndex] = userAnswer.front();

                    // Move to the next question
                    currentQuestionIndex++;

                    // Check if it's the last question

                    if (currentQuestionIndex == questions.size()) {
                        std::cout << "This is the last question. Enter S to submit. Enter P for previous questions: ";
                        std::string submitChoice;
                        std::cin >> submitChoice;

                        if (submitChoice == "S" || submitChoice == "s") {
                            // User chose to submit
                            continueQuiz = false;

                        } else if (submitChoice == "P" || submitChoice == "p") {
                            currentQuestionIndex--;

                        } else {
                            cout << "Invalid choice. Enter S to submit or P for previous";

                        }
                    }
                } else {
                    std::cout << "Invalid input. Please enter A, B, C, D, P, N, or S." << std::endl;
                }

            }


// Calculate the result
int result = 0;
if (userAnswers[0] == 'B' || userAnswers[0] == 'b') {
    result = result + 1;
}
if (userAnswers[1] == 'A' || userAnswers[1] == 'a') {
    result = result + 1;
}
if (userAnswers[2] == 'D' || userAnswers[2] == 'd') {
    result = result + 1;
}
if (userAnswers[3] == 'C' || userAnswers[3] == 'c') {
    result = result + 1;
}
if (userAnswers[4] == 'C' || userAnswers[4] == 'c') {
    result = result + 1;
}
if (userAnswers[5] == 'A' || userAnswers[4] == 'c') {
    result = result + 1;
}
if (userAnswers[6] == 'A' || userAnswers[4] == 'c') {
    result = result + 1;
}


            // Display the result
            std::cout << "Result = " << result << "/ " << questions.size() << std::endl;

            // CODE TO WRITE ANSWERS AND SCORE TO A FILE CALLED myscript.txt
            ofstream myfile("myscript.txt");
            if (myfile.is_open()) {
                for (size_t i = 0; i < userAnswers.size(); ++i) {
                    myfile << "Question " << i + 1 << ": " << userAnswers[i] << endl;
                }
                myfile << "Result = " << result << "/" << questions.size() << endl;
                myfile.close();
                cout << "Answers and score written to 'myscript.txt'." << endl;
            } else {
                cout << "Error opening 'myscript.txt' for writing." << endl;
            }

            break; // Exit the loop since authentication is successful
        } else {
            cout << "Authentication failed. Incorrect username or password. Please try again." << endl;
        }
    }

    return 0;
}



