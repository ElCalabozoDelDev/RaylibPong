/*
Raylib example file.
This is an example main file for a simple raylib project.
Use this as a starting point or replace it with your code.

For a C++ project simply rename the file to .cpp and run premake 

-- Copyright (c) 2020-2024 Jeffery Myers
--
--This software is provided "as-is", without any express or implied warranty. In no event 
--will the authors be held liable for any damages arising from the use of this software.

--Permission is granted to anyone to use this software for any purpose, including commercial 
--applications, and to alter it and redistribute it freely, subject to the following restrictions:

--  1. The origin of this software must not be misrepresented; you must not claim that you 
--  wrote the original software. If you use this software in a product, an acknowledgment 
--  in the product documentation would be appreciated but is not required.
--
--  2. Altered source versions must be plainly marked as such, and must not be misrepresented
--  as being the original software.
--
--  3. This notice may not be removed or altered from any source distribution.

*/

#include <iostream>
#include "raylib.h"
#include "ball.h"
#include "paddle.h"

using namespace std;

int main ()
{
	cout << "Starting the game" << endl;
	const int screenWidth = 800;
	const int screenHeight = 450;
	// Initialization
	InitWindow(screenWidth, screenHeight, "PONG!");
	SetTargetFPS(60);
	Ball ball;
	Paddle player = Paddle(5, screenHeight / 2 - 30, 15, 60, 5);
	// Main game loop
	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		BeginDrawing();

		// Update
		ball.Update();
		player.Update();
		// Drawing
		ClearBackground(RAYWHITE);
		DrawLine(screenWidth / 2, 0, screenWidth / 2, screenHeight, GRAY);
		ball.Draw();
		player.Draw();
		DrawRectangle(screenWidth - 20, screenHeight / 2 - 30, 15, 60, BLUE);
		EndDrawing();
	}
	CloseWindow();        // Close window and OpenGL context
	return 0;
}