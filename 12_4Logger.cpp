#include <iostream>
#include <deque>
#include <string>

class Logger {

private:
    std::deque<std::string> messages;
    const size_t max_size;

public:
    Logger(size_t max_count) : max_size(max_count) {}

    void add(const std::string& message) {

        if (max_size == 0) {
            return;
        }

        if (messages.size() >= max_size) {
            messages.pop_front();
        }

        messages.push_back(message);
    }

    void show() const {
        std::cout << "Count messages (N=" << max_size << ", current size =" << messages.size() << ")\n";

        for (size_t i = 0; i < messages.size(); i++) {
            std::cout << messages[i];
            if (i < messages.size() - 1) {
                std::cout << ", ";
            }
        }
    }

    size_t size() const {
        return messages.size();
    }
};

int main() {
    Logger log(3);
    log.add("start");
    log.add("init");
    log.add("run");
    log.add("stop");
    log.show();

    return 0;
}