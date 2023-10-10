# Trapezium

Schrijf een programma dat een trapezium uitprint. De gebruiker mag een hoogte opgeven. Deze hoogte mag niet kleiner dan 5 zijn en niet groter dan 20.

    $ ./trapezium
    Hoe hoog moet het trapezium zijn? 5
        ##########
       #        #
      #        #
     #        #
    ##########

    $ ./trapezium
    Hoe hoog moet het trapezium zijn? 15
                  ##############################
                 #                            #
                #                            #
               #                            #
              #                            #
             #                            #
            #                            #
           #                            #
          #                            #
         #                            #
        #                            #
       #                            #
      #                            #
     #                            #
    ##############################

    $ ./trapezium
    Hoe hoog moet het trapezium zijn? -3
    Hoe hoog moet het trapezium zijn? 40
    Hoe hoog moet het trapezium zijn? 3
    Hoe hoog moet het trapezium zijn? 5
        ##########
       #        #
      #        #
     #        #
    ##########

Als beginpunt kun je deze code gebruiken:

    #include <cs50.h>
    #include <stdio.h>

    int main(int argc, string argv[])
    {
        // TODO
    }
