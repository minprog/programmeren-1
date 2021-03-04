# Linked

> Bij deze opdracht is het helemaal prima om samen te werken met één of twee medestudenten. Zorg dat je gezamenlijk op één scherm kunt kijken en echt samen het probleem probeert op te lossen. Heeft iemand een goed idee, dan moet die zorgen dat de anderen het ook begrijpen. De bedoeling is dat alle samenwerkers evenveel hebben bijgedragen aan de opdracht. Iedereen levert uiteindelijk een eigen versie in.

This exercise gets you started building linked lists and deepening your understanding. Start out with a detailed explanation video and then just try implementing that data structure in C! This exercise specifially prepares you for the next, larger assignment, so definitely go and spend quite a bit of time on this one.

## Background

Have detailed look at linked lists with this video:

![embed](https://www.youtube.com/embed/xdkSNe43iNM)

## Getting started

Execute in a terminal window

    mkdir -p ~/exercises/linked
    cd ~/exercises/linked
    wget https://github.com/minprog/exercises/raw/main/writing/linked/linked.c

## Linked lists

You are going to build your own linked list. For some additional reading, you might also want to have a look at <https://study.cs50.net/linked_lists>.

Jump into `linked.c`. We have provided you with a `print_list` function which should print your linked list. As you compile and run this program, you see that the function only prints the brackets `[ ]`, which may seem correct since we haven't inserted anything. Yet, if you look at the code you may notice that the crucial part of `print_list` is missing.

Finish the function `print_list` in such a way that it loops through the linked list and prints out any number in that list. Don't forget to add a space between the numbers, for clarity. 

It's now up to you to insert the numbers `2`, `3`, `4` and `5` in such a way that when you execute `./linked`, the program prints

    [ 2, 3, 4, 5 ]

To do this, implement an insertion method for a linked list in `insert`. Some basics are already there, such as the struct for `node` and a pointer to the head node.

Note: it may be a good idea to first insert _any_ two numbers and test if your `print_list` function works as intended.
