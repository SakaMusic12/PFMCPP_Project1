#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       pitbull
//  action 1:   the pitBull fetches the ball
pitbull.fetchBall();
//  action 2:   the pitBull sleeps
pitbull.sleep();
//  action 3:   the pitBull chases the car
pitbull.chaseCar();
//  2)
//  Noun:       train
//  action 1:   the train derails and crashes
train.derailAndCrash();
//  action 2:   the train accelerates
train.accelerate();
//  action 3:   the train whistles
train.whistle();
//  3)
//  Noun:       guitar
//  action 1:   the guitar reverberates
guitar.rev();
//  action 2:   the guitar plays forte
guitar.playForte();
//  action 3:   the guitar breaks a string
guitar.breakString();
//  4)
//  Noun:       nose
//  action 1:   the nose sniffs
nose.sniff();
//  action 2:   the nose sneezes
nose.sneeze();
//  action 3:   the left nostril runs
nose.leftNostrilRun();
//  5)
//  Noun:       cheetah
//  action 1:   the cheetah pounces
cheeta.pounce();
//  action 2:   the cheeta crouches
cheeta.crouch();
//  action 3:   the cheeta sips water
cheeta.sipWater();
//  6)
//  Noun:       mayor
//  action 1:   the mayor delivers a speech
mayor.deliverSpeech();
//  action 2:   the mayor eats lunch
mayor.eatLunch();
//  action 3:   the mayor signs documents
mayor.signDocument();
//  7)
//  Noun:       monsterTruck
//  action 1:   the monster truck crushes
monsterTruck.crush();
//  action 2:   the monster truck flips over
monsterTruck.flipOver();
//  action 3:   the monster truck burns fuel
monsterTruck.burnFuel();
//  8)
//  Noun:       country
//  action 1:   the country exports bananas
country.exportBanana();
//  action 2:   the country collects taxes
country.collectTax();
//  action 3:   the country builds seaports
country.buildSeaPort();
//  9)
//  Noun:       printer
//  action 1:   the printer scans
printer.scan();
//  action 2:   the printer consumes ink
printer.consumeInk();
//  action 3:   the printer connects to wifi
printer.connectToWifi();

//  10)
//  Noun:       saxophone
//  action 1:   the saxophone plays legato 
saxophone.playLegato();
//  action 2:   the saxophone accents the note
saxophone.accentNote();
//  action 3:   the saxophone plays multiphonics
saxophone.playMultiphonic();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
