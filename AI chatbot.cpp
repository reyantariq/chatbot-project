#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Chatbot {
public:
    // Function to start the conversation
    void start() {
        string user_input;
        cout << "Hello! I am your chatbot. Type 'quit' to end the conversation.\n";
        
        // Loop until the user types 'quit'
        while (true) {
            cout << "You: ";
            getline(cin, user_input);
            transform(user_input.begin(), user_input.end(), user_input.begin(), ::tolower);
            
            // If user types 'quit', exit the loop
            if (user_input == "quit") {
                cout << "Goodbye!\n";
                break;
            }
            
            // Get chatbot's response
            string response = get_response(user_input);
            cout << "Bot: " << response << endl;
        }
    }

private:
    // Function to generate chatbot response based on user input
    string get_response(const string& input) {
        // Simple rule-based responses
        if (input == "hello" || input == "hi" || input == "hey") {
            return "Hello! How can I help you today?";
        }
        else if (input == "how are you") {
            return "I'm good, thank you! How are you?";
        }
        else if (input == "what is your name") {
            return "I am a simple chatbot.";
        }
        else if (input == "bye") {
            return "Goodbye! Have a great day!";
        }
        else {
            return "Sorry, I didn't quite understand that. Can you ask something else?";
        }
    }
};

int main() {
    Chatbot chatbot;
    chatbot.start(); // Start the chatbot conversation
    return 0;
}
