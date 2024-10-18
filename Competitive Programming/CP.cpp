/// Common include for competitive programming; <bits/stdc++.h> includes almost all standard libraries
#include <bits/stdc++.h>
#ifdef LOCAL
#include <Windows.h>         //< Windows-specific header to be used only in a LOCAL environment for debugging
#else
#pragma GCC optimize("Ofast,unroll-loops")                           //> Enabling fast optimizations and loop unrolling for better performance
#pragma GCC target("avx2,popcnt,lzcnt,abm,bmi,bmi2,fma,tune=native") //> Optimize for CPU-specific instruction sets: AVX2, POPCNT, LZCNT, ABM, BMI, BMI2, FMA, tuned for the native architecture
#endif

using namespace std;
using namespace std::chrono; //< For high-resolution timing (optional but useful for performance benchmarking)

/// Define macros to simplify repetitive actions
#define OpenFiles(filein, fileout) if (!filein.empty()) ifstream cin (filein); if (!fileout.empty()) ofstream cout (fileout) //< Open input and output files if they are specified
#define EnableFastIO() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)                                 //< Enables fast I/O by desyncing I/O with C-style streams

/// Macros to print YES or NO results, often used in competitive programming
#define NO cout << "NO"
#define YES cout << "YES"
#define NOn cout << "NO\n"
#define YESn cout << "YES\n"

/// Control flags for conditional compilation
#define USE_FILE_IO 0          //< Set to 1 if file input/output is needed, otherwise 0 (default = 0)
#define USE_FAST_IO 1          //< Set to 1 to enable fast I/O using the EnableFastIO macro (default = 1)
#define RUN_ON_64_BITS 1       //< Set to 1 to force the use of 64-bit integers (int64_t) (default = 1)
#define FETCH_TESTCASE_COUNT 1 //< Set to 1 if the number of test cases is provided as input (default = 1)

/// Aliases for commonly used data types
#define ll int64_t
#define ull uint64_t
#if RUN_ON_64_BITS
    #define uint uint64_t   //< Define uint as 64-bit unsigned integer if in 64-bit mode
#else
    #define uint uint32_t   //< Otherwise, define uint as 32-bit unsigned integer
#endif

// Global variables for the problem and test case management
const string ProblemName = "";           //< Problem name, useful when working with file input/output
int32_t TestcaseCount = 1, Testcase = 1; //< Store the number of test cases and the current test case index

#ifdef LOCAL
#define debug(x) cerr << #x << ": " << x << endl //< Debug macro to print variable names and their values in a local environment
#else
#define debug(x)                                 //< In a non-LOCAL environment, the debug macro does nothing
#endif

/// Solution class for organizing the logic of the problem
class Solution
{
public:
	static void PreInit()  //< Function to initialize any data before processing test cases
	{
        // Add any pre-initialization code here, such as reading constants or setting up data structures
	}

	static void Testcase() //< Function to handle the logic of each individual test case
	{
        // The logic for each test case should be implemented here
        // Input processing and output handling go here
	}
}
Sol; //< Create an instance of the Solution class

/// Main function where execution begins
int32_t main()
{
#if USE_FILE_IO && !defined(LOCAL) //< If file I/O is enabled and the program is not in LOCAL mode, open input/output files
	OpenFiles(ProblemName + ".in", ProblemName + ".out");
#endif
#if USE_FAST_IO                    //< If fast I/O is enabled, sync C++ I/O streams with C-style I/O for better performance
	EnableFastIO();
#endif
#if FETCH_TESTCASE_COUNT           //< If the number of test cases is provided, read it from input
	cin >> TestcaseCount;
#endif
	Sol.PreInit();
	for (; Testcase <= TestcaseCount; Sol.Testcase(), Testcase++);
	return 0;
}
