# Battleground of Bravery

## Project Overview

Dive into **Battleground of Bravery**, a terminal-based 2D combat simulation that unfolds in a realm where every square on the grid is imbued with powers that can alter the course of battle. This game invites players to lead their heroes through trials of strength and wit, facing off against formidable villains in a landscape where the very ground beneath their feet can be ally or adversary.

### Setting the Scene

In an age where the balance between light and darkness teeters on the edge of a sword, the Battleground emerges as the ultimate arena. It is a place of power, mystery, and endless possibility, where each square is suffused with ancient power - from the whispers of the wind that can hasten allies or hinder foes, to the shadows that cloak movements in secrecy, and the radiant beams that heal or harm.

## Gameplay Criteria and Requirements

### Grid Configuration

The game is played on a 7x7 grid, providing a strategic battlefield for players and enemies alike.

**Cell Mechanics:** Each cell on the grid possesses an "active effect" that activates when a token (player or enemy) occupies it. These effects can range from beneficial (like healing or boosting attack power, range, or movement) to detrimental (such as traps or debuffs), adding a layer of strategy to movement and positioning.

### Initial Setup

- **Game Modes**: The game will either be initialized randomly or from a file. The factors you need to keep in mind include:
	- The active effects given to each cell
	- The # of players in the game and their starting weapons and locations
	- The # of enemies in the game based on the number of players and their starting weapons and locations
	- The turn order for the tokens.

### Player Setup

- **Health Allocation:** Each player starts with a predetermined amount of health, essential for surviving enemy encounters.
- **Starting Weapon:** Players are assigned a starting weapon, introducing an element of unpredictability and strategy in combat.
- **Damage Modifier:** Players will have a starting damage modifier that will be applied to all their attacks. It can be negative if debuffed enough by the grid. 
- **Movement:** The number of cells a player can move on the grid during their turn. They should be able to go up, down, left, or right (no diagonals) and can't move more than their Movement number on any given turn.
	- Only one token can be on a cell at a time
	- Movement can't be through an occupied cell.

### Enemy Types and Distribution

- **Enemy Points:** Each player in the game adds 5 enemy points, used to populate the board with enemies of varying strengths:
    - **Minions:** The weakest enemy type, requiring 1 enemy point to place on the board. These are numerous but easily defeated.
    - **Normals:** Mid-level adversaries, each costing 2 enemy points to deploy. They offer a moderate challenge.
    - **Elites:** The strongest foes, with each elite enemy costing 3 points to place. They are few but formidable.
- **Enemy Attributes:** Enemies possess at least the same attributes as players that vary based on their subtype, adding depth to combat encounters. Ensure the minions, normals, and elites all have attributes that scale according to how difficult they should be.

### Weapons

- Design a minimum of five unique weapon types. Each weapon should be distinct in name and function to encourage a variety of combat strategies.
    
- **Damage Mechanism:** Weapons should deal damage based on simulated dice rolls. Dice typically come in varieties of 4, 6, 8, 10, 12, or 20 sided dice. Choose appropriate dice (e.g., d4, d6, d8, d10, d12) to represent the weapon's potential damage output.
	
- **Modifiers:** Damage can be augmented by character-specific modifiers, which are not inherent to the weapons themselves but are applied based on the character using the weapon.
	
- **Hit Chance Mechanic:** Incorporate a hit chance for each weapon, represented as a percentage. This mechanic simulates the probability of an attack successfully hitting the target, adding an additional layer of strategy and uncertainty to combat encounters.
    
- **Range Categories:** Define whether each weapon is Melee, Short, Medium, or Long range. This will affect how characters can engage enemies on the grid.
    
Example:

**Daggers of Shadow**

- **Damage:** 2d4 (Simulate rolling two four-sided dice for damage)
- **Modifier:** *retrieved from the token, added to the damage*
- **Hit Chance:** 80%
- **Range:** Melee (enemy must be within 1 grid cell)
### Cell Active Effects Requirements

- **Develop at least 10 Unique Active Effects:** Your goal is to design a balanced mix of both power-ups and debuffs, each with its own unique impact on gameplay.
    
- **Power-Up Effects:** Consider incorporating effects such as:
    
    - Boosting health regeneration each round while on the cell.
    - Increasing your damage modifier for more potent attacks.
    - Extending the range of your weapon, allowing for attacks from further away.
    - Enhancing your weapon's hit chance, making your attacks more likely to succeed.
    - Boosting your movement for the turn, enabling you to cover more ground.
    - Swapping out your current weapon for a different one upon entering the cell, potentially offering strategic advantages.

- **Debuff Effects:** Think about debuffs that could:
    
    - Reduce your health, making survival more challenging.
    - Lower your damage output, requiring you to rethink your combat strategy.
    - Limit your weapon's range, forcing you to get closer to enemies.
    - Decrease your weapon's hit chance, making it harder to land attacks.
    - Impair your movement, limiting how far you can move in a turn.

- **Neutral:** You may choose to add a "neutral" effect options to the list of choices but it doesn't count as one of the ten required ones. 

- **Decide on Effect Duration:** You'll need to choose whether an effect lasts for the entire turn or only while you're standing on the cell. This decision will significantly impact tactical decisions and movement on the grid

- **Effect Tracking:** Tokens must have a way of knowing what active effects are currently applying to them.

- **Mystery or Revealed:** You can choose if tokens can see what the active effect is prior to stepping on it or if that is concealed. Either way, a token should be able to see the effects of cells it has already stepped on.
	- You may want to do this either by using a menu option, or giving your grid a symbol legend
### Combat Specifications

- **Rounds:** Combat will take place over a rounds. A round resets after each token has taken their turn.

- **Turn Structure:** Each turn consists of the following phases:
    
    1. **Movement:** You can move your token up to its maximum movement number across the grid cells. Movement can be split before and after the attack phase.
    2. **Attack:** If an enemy is within the range of your current weapon, you can choose to make an attack. This phase is optional and dependent on enemy proximity.
    3. **End Turn:** After completing your movement and any potential attack, your turn ends. Turns can be ended with remaining movement if the player so chooses.
- **Movement and Attack Flexibility:** You have the flexibility to split your movement around your attack. This means you can move part of your total distance, choose to attack if an enemy is in range, and then continue moving if you have remaining movement allowance.
    
- **Player Action Menu:** At the start of your turn, you'll be prompted with a menu to choose your actions. This menu will allow you to plan and execute your movement and attacks strategically.
    
- **Enemy Behavior:** Enemies will automatically move towards the closest player each turn. If they come within range of a player, they will launch an attack. They usually won't split up their movement, nor do they factor in the active effects of their path. They simply take the most direct route.

- **Running out of Health:** If a token runs out of health, it is out of the combat and can't take any turns.

### Winning Conditions
The game concludes when after one side of the combat has lost all of its health. You may also decide to stop the game after a certain number of rounds. In that case, the side with the most health will be the winner. You must determine how to track if a win condition has been fulfilled.

### Conclusion and Analysis

- At the end of the game, print out a nicely formatted summary of the game to the terminal. This card should include printouts of things like the winning side, the tokens on that side, what weapons and active effects they have, their health, etc.
- You must also print a game summary, including relevant game statistics and token statistics for all players/enemies to an output file.

### Additional Features

- **Visualization:** Consider ways to visually represent the grid, cell effects, and tokens to make the simulation more engaging and informative.
- **Interactive Menu:** Include a menu for users to view statistics, rerun the simulation, or exit the program.
	- All outputs should be nicely formatted into rows and columns anywhere appropriate.
	- The main menu choices should be at least:
		1. Run Game (2-4 tokens)
			- Randomized Initialization
			- Initialize from file 
		2. Re-play Game
		3. Quit
- **Prompt Menus**:
	- You must also prompt the user for input and explain their possible choices to them to make the game flow properly anywhere it is necessary.
## Grading Criteria

Your project will be evaluated based on how well you've implemented the following Object-Oriented Programming concepts and programming best practices:

1. **Object-Oriented Design:**
    - Your program must be designed around the principles of Object-Oriented Programming. Classes should be used to represent different entities where appropriate.
2. **Use of Dynamic Memory:**
    - Proper use of dynamic memory allocation (using `new` and `delete`) is expected, especially for managing collections of objects.
3. **Class Structures:**
    - Demonstrate understanding of class structures, including attributes, methods, and access specifiers (public, protected, private).
4. **Inheritance and Polymorphism:**
    - Your design should include examples of inheritance, showcasing the relationship between base and derived classes. Polymorphism should be used to allow for dynamic method binding.
5. **Encapsulation and Abstraction:**
    - Encapsulation should be evident through the use of classes to hide implementation details. Abstraction should be used to provide interfaces for classes, making the implementation details irrelevant to the user.
6. **Proper Use of Containers:**
    - Use C++ Standard Library containers (e.g., vectors, lists) to manage collections of objects efficiently.
7. **File Organization:**
    - Code should be well-organized across multiple files, typically separating class declarations in header files (.h) and definitions in implementation files (.cpp).
8. **Macro Guards in Header Files:**
    - Header files should contain macro guards to prevent multiple inclusions.
9. **Code Formatting:**
    - Your code should be well-formatted, using consistent indentation and whitespace to enhance readability.
10. **Efficient Memory Use:**
    - Demonstrate efficient memory use, avoiding memory leaks by properly deallocating dynamically allocated memory.
11. **Use of `const` and Pass-by-Reference:**
    - Where appropriate, use `const` to prevent modification of parameters passed to functions. Utilize pass-by-reference to avoid unnecessary copying of complex objects.
12. **Function Overloading and Default Arguments:**
    - Use function overloading to create functions with the same name but different parameters. Default arguments can be used to provide default values for function parameters.
13. **Error Handling:**
    - Implement error handling to manage unexpected situations or input errors gracefully.
14. **Documentation:**
    - Your code should be well-documented, including comments explaining the purpose of classes and methods, and any complex logic.

## Submission Instructions

To ensure a smooth submission and review process, please adhere to the following guidelines:

1. **Project Submission:**
    - Commit and push your complete project to your assigned GitHub Classroom repository.
2. **File Initialization**: You must include at least 3 files that can be used to load an initial game state from files. The formatting of those files is up to you. You must include a guide to their layout in your README.md documentation.
3. **Documentation:**
    - Alongside your code, include a README.md within your repository. Repository READMEs are written in Markdown, the standard document writing language for code repositories that controls formatting mostly through typing, rather than a toolbar. Here is a page that gives an overview of the formatting commands: [Markdown Cheat Sheet](https://www.markdownguide.org/cheat-sheet/)
    - This README.md should be at the top level of your repo and include at least the following sections.
        - **Compilation Instructions:** Detailed steps on how to compile your project, including any required flags or commands.
        - **Execution Instructions:** Clear instructions on how to run your project, specifying any required arguments or inputs.
        - **Project Status:** An overview of the current state of your project, highlighting whether it is complete, any known bugs, or incomplete features.
        - **Manual**: Include a brief, yet informative instruction manual telling users how to interact with your program and what it does. Include a brief description of your code design and how you went about implementing the project. Assume the reader is not familiar with the project before reading your manual.
        - **UML Diagrams**: Include UML diagrams for all of your classes. We recommend using [Mermaid](https://mermaid.live) , a convenient tool for building charts using a code-like syntax. You can embed the Mermaid code directly into your .md file using a markdown code block (open with \`\`\`mermaid and end the block with \`\`\`) and the code will render into the diagram. Think of the backticks like curly braces bundling the UML code together.
	        - [Mermaid Cheat Sheet](https://mermaid.js.org/syntax/classDiagram.html)
		    You may use whatever tool you like to make the UML Diagrams (like another online tool, or any tool that lets you make tables, like Excel \[Free for you with your student email])
		    Include the UMLs either embedded into your `README.md `or in their own `UML.pdf` file. Your choice.
 4. **Compatibility:**
    - Your project must be fully functional within GitHub Codespaces. This is crucial for ensuring that your project can be run and evaluated in a standardized environment.
    - You can still develop locally, but you should still ensure your code behaves as expected within a Codespace before committing.
