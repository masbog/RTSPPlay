
#define SCREEN_WIDTH 320
#define SCREEN_HEIGHT 480


extern int randomInt(int min, int max);
extern float randomFloat(float min, float max);
extern void fatalError(const char *string);
extern void switchWindows(void);
extern int eaglSetContext(void);
extern void iPhonePumpMessages(void);