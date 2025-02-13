
/*<Task2>
Write a program that lists the instructions,
a computer would follow to find the upstairs bathroom(book exercise).
*/
#include <iostream>

class gotoBathroomUpstairs
{
private:
	double x, y, z;
	const int degree{360};
	int rightFoot, leftFoot;
	bool objectDetected;

public:
	// Constructor using the member initializer list
	gotoBathroomUpstairs() : x(0), y(0), z(0), rightFoot(0), leftFoot(0), objectDetected(false)
	{
		std::cout << "Constructor: Initialized gotoBathroomUpstairs object." << std::endl;
	}

	// Object detection function
	bool detectObjects()
	{
		return objectDetected;
	}

	// Walk function
	void walk(int steps)
	{
		for (int i = 0; i < steps; ++i)
		{
			rightFoot++;
			leftFoot++;
			std::cout << "Step " << i + 1 << " taken. Current position: (" << x << ", " << y << ", " << z << ")" << std::endl;
		}
	}

	// Function to rotate and scan for objects
	void rotateAndScan()
	{
		std::cout << "Starting rotation and scanning for objects..." << std::endl;

		// Simulate rotating in 90-degree increments
		for (int i = 0; i < 4; ++i) // 360 degrees, divided into 4 steps (90 degrees each)
		{
			int currentRotation = i * 90;
			std::cout << "Rotating: " << currentRotation << " degrees" << std::endl;

			// Detect object only at 90 degrees
			if (currentRotation == 90)
			{
				objectDetected = true;
			}
			else
			{
				objectDetected = false;
			}

			// Print detection result
			if (objectDetected)
			{
				std::cout << "Object detected at " << currentRotation << " degrees." << std::endl;
			}
			else
			{
				std::cout << "No object detected at " << currentRotation << " degrees." << std::endl;
			}
		}

		std::cout << "Scan complete." << std::endl;
		objectDetected = false; // Reset object detection
	}

	// Function to findStairs
	void findStairs()
	{
		int stairs{4}; // assume there are 4 stairs

		rotateAndScan();
		objectDetected = true; // assuming the stairs is detected
		if (objectDetected)
		{
			std::cout << "Stairs found! Moving towards them." << std::endl;
			walk(10); // assuming there are 10 steps to the stairs
			std::cout << "Moved to stairs. There are " << stairs << " stairs. Attempting to climb them." << std::endl;
			walk(stairs); // climbing 4 stairs
			std::cout << "Successfully climbed the stairs" << std::endl;
		}
		else
		{
			std::cout << "Cannot climb the stairs, object not detected." << std::endl;
		}
	}
	// Function to findDoor
	void findDoor()
	{
		rotateAndScan();
		objectDetected = true; // assuming the door is detected
		if (objectDetected)
		{
			std::cout << "Door found" << std::endl;
			std::cout << "Walking to that door" << std::endl;
			walk(5); // assuming there are 5 steps to the door
			std::cout << "Successfully arrived at the door" << std::endl;
		}
		else
		{
			std::cout << "No door detected." << std::endl;
		}
	}
	// Function to findBathroom
	void findBathroom()
	{
		rotateAndScan();
		objectDetected = true; // assuming the bathroom is detected
		if (objectDetected)
		{
			std::cout << "Bathroom found, entering it" << std::endl;
		}
		else
		{
			std::cout << "No bathroom detected." << std::endl;
		}
	}
};

int main()
{
	gotoBathroomUpstairs test;
	test.walk(5);
	test.rotateAndScan();
	test.findStairs();
	test.findDoor();
	test.findBathroom();
	return 0;
}
