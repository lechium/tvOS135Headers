//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSDLogModel : NSObject
{
    struct __sFILE *_logFP;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000100003d10
@property struct __sFILE *logFP; // @synthesize logFP=_logFP;
- (id)fileNameForTodayUnder:(id)arg1 prefix:(id)arg2;	// IMP=0x000000010000465c
- (_Bool)enableLogToFilesUnder:(id)arg1 prefix:(id)arg2 expireDays:(long long)arg3;	// IMP=0x0000000100004090
- (_Bool)enableLogToFile:(id)arg1;	// IMP=0x0000000100003f4c
- (void)logMessage:(id)arg1;	// IMP=0x0000000100003df8
- (void)logWithFormat:(id)arg1 andArgs:(char *)arg2;	// IMP=0x0000000100003d7c

@end

