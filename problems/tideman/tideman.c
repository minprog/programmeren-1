#define _POSIX_C_SOURCE 200809L

#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// preferences[i][j] is number of voters who prefer i over j
static int preferences[MAX][MAX];

// locked[i][j] means i is locked in over j
static bool locked[MAX][MAX];

// Each pair has a winner, loser
typedef struct
{
    int winner;
    int loser;
} pair;

// Array of candidates
static string candidates[MAX];
static pair pairs[MAX * (MAX - 1) / 2];

static int pair_count;
static int candidate_count;

// Function prototypes
bool vote(int rank, string name, int ranks[]);
void record_preferences(int ranks[]);
void add_pairs(void);
void sort_pairs(void);
void lock_pairs(void);
void print_winner(void);

int main(void)
{
    string names = get_string("What are the names of the candidates: ");

    candidate_count = 1;
    for (int i = 0, n = strlen(names); i < n; i++)
    {
        if (i > 0 && names[i] != ' ' && names[i - 1] == ' ')
        {
            candidate_count++;
        }
    }

    // Populate array of candidates
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }

    // Parse the string, put the names in candidates
    int length = 0;
    int candidate = 0;
    for (int i = 0, n = strlen(names); i < n; i++)
    {
        length++;
        if (names[i] == ' ')
        {
            // Skip empty strings
            if (length != 1)
            {
                candidates[candidate] = strndup(&names[i - (length - 1)], length - 1);
                candidate++;
            }
            length = 0;
        }
    }

    // Last name
    if (length > 1)
    {
        candidates[candidate] = strndup(&names[strlen(names) - (length)], length);
    }

    // Clear graph of locked in pairs
    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            locked[i][j] = false;
        }
    }

    pair_count = 0;
    int voter_count = get_int("Number of voters: ");

    // Query for votes
    for (int i = 0; i < voter_count; i++)
    {
        // ranks[i] is voter's ith preference
        int ranks[candidate_count];

        // Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            if (!vote(j, name, ranks))
            {
                printf("Invalid vote.\n");
                return 3;
            }
        }

        record_preferences(ranks);

        printf("\n");
    }

    add_pairs();
    sort_pairs();
    lock_pairs();
    print_winner();
    return 0;
}

// Update ranks given a new vote
bool vote(int rank, string name, int ranks[])
{
    // TODO
    return false;
}

// Update preferences given one voter's ranks
void record_preferences(int ranks[])
{
    // TODO
    return;
}

// Record pairs of candidates where one is preferred over the other
void add_pairs(void)
{
    // TODO
    return;
}

// Sort pairs in decreasing order by strength of victory
void sort_pairs(void)
{
    // TODO
    return;
}

// Lock pairs into the candidate graph in order, without creating cycles
void lock_pairs(void)
{
    // TODO
    return;
}

// Print the winner of the election
void print_winner(void)
{
    // TODO
    return;
}
