#include <iostream>
#include <string>

using namespace std;

void sendMessage(const string& message) {
    cout << "Sending message: " << message << endl;
}


void receiveMessage(const string& message) {
    cout << "Received message: " << message << endl;
}


void makePhoneCall(const string& receiver) {
   cout << "Calling " << receiver << "..." << endl;
}


void ringUntilPickedUp(const string& receiver) {
    cout << "Ringing " << receiver << "..." << endl;
    cout << "Waiting for " << receiver << " to pick up the call..." << endl;

    bool isPickedUp = false;
    while (!isPickedUp) {
        
        for (int i = 0; i < 3; ++i) {
            cout << "Ring..." << endl;
            for (int j = 0; j < 100000000; ++j) {}
        }

        cout << receiver << " picked up the call!" << endl;
        isPickedUp = true;
    }
}

int main() {

    string sentMessage = "How is Bahria University?";
    sendMessage(sentMessage);

    string receivedMessage = "Bahria University is an Excellent University.";
    receiveMessage(receivedMessage);

    
    string receiverName = "Hamza";
    makePhoneCall(receiverName);
    ringUntilPickedUp(receiverName);

    return 0;
}
