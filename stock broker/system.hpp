#include "user.hpp"
#include "unordered_map"
//This is admin of stock broker app. There are many aspects of any system
//For our requirements, we just needed user management.
//There could be a separate class "UserManager" but since we didn't design for any 
//other system requirement, this made sense.

class System {
	static unordered_map<string, User*> users;
public:
	static User* getUser(string userId) {
		return users[userId];
	}
	static void addUser(string userId, User* user) {
		users[userId] = user;
	}
};