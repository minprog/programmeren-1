# UNIX: nl

Schrijf een tool genaamd `nl` die de inhoud van een file naar de terminal print, met regelnummers vóór elke regel (tel vanaf 1). Lege regels krijgen geen nummer! De naam van de file wordt opgegeven als command-line argument.

    $ ./nl index.md
          1 # Mario

          2 Toward the end of World 1-1 in Nintendo's Super Mario Brothers, Mario must
          3 ascend right-aligned pyramid of blocks, a la the below.

          4 ![screenshot of Mario jumping up a right-aligned pyramid](pyramid.png)

          5 Let's recreate that pyramid in C, albeit in text, using hashes (`#`) for
          6 bricks, a la the below. Each hash is a bit taller than it is wide, so the
          7 pyramid itself also becomes taller than it is wide.

          8        #
          9       ##
         10      ###
         11     ####
         12    #####
         13   ######
         14  #######
         15 ########
