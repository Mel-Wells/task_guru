# Task Guru

Task Guru is a motivational task management application that helps users track tasks, prioritize them, and stay focused with a built-in focus mode. The application is designed to make task management less daunting by allowing users to break tasks into subtasks, prioritize them, and receive praise for small progress. The app uses Object-Oriented Programming (OOP) principles and features a simple terminal-based GUI.

## What was used

The following technologies and concepts were used:

- **C++**
- **OOP principles** (Inheritance, Abstract Data Types)
- **Simple Terminal-Based GUI**

## How was it made

Task Guru was created with the goal of making task management more approachable and motivating for users. The application features a focus mode based on the Pomodoro technique, allowing users to concentrate on tasks in short bursts. Users can add tasks, set priorities, and mark tasks as complete. The app can handle multiple tasks, each identified by an ID, and allows users to interact with it via a simple menu-driven interface.

### Key Features:
- **Task Management**: Users can add, delete, and mark tasks as complete. Each task includes an ID, title, description, due date, status, and priority.
- **Focus Mode**: A timer-based focus system helps users concentrate on tasks for a set period.
- **Priority System**: Tasks can be marked as high or normal priority.
- **Task Breakdown**: Users can break down large tasks into smaller, manageable subtasks.

## What went wrong?

As with any project, there were some challenges along the way:

- **Timer Issues**: Initially, the focus mode timer had a logic error that caused incorrect outputs. This was resolved by properly managing the output within the loop.
- **User Interface**: The terminal-based UI was initially cluttered, making it difficult to read. By improving spacing and layout with newlines, the readability was greatly enhanced.
- **Productivity Tracker**: Due to time constraints, the productivity tracker feature was removed. There were issues with implementing the timer to track time, which was eventually replaced by refining the focus mode.

## Future Plans

Some plans for further expansion and improvement of this project include:

- **Improved UI**: Developing a better user interface using Qt.
- **CMake Integration**: Building the application using CMake for better project management.
- **Bite-Sized Achievements**: Introducing a feature that breaks tasks into smaller achievements to boost motivation.
- **Motivational Sayings**: Adding more personalized and research-backed motivational sayings to encourage users.

