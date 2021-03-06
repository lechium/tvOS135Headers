//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVServices/TVSBackgroundTask.h>

@protocol TVPMyPSImageLoadTaskDelegate;

@interface TVPMyPSImageLoadTask : TVSBackgroundTask
{
    _Bool _shouldPerformLoad;	// 8 = 0x8
    _Bool _isLoading;	// 9 = 0x9
    id <TVPMyPSImageLoadTaskDelegate> _delegate;	// 16 = 0x10
    unsigned long long _loadID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100011144
@property(nonatomic) unsigned long long loadID; // @synthesize loadID=_loadID;
@property(nonatomic) __weak id <TVPMyPSImageLoadTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool shouldPerformLoad; // @synthesize shouldPerformLoad=_shouldPerformLoad;
- (void)stop;	// IMP=0x0000000100011054
- (_Bool)perform;	// IMP=0x0000000100010ff0
- (id)init;	// IMP=0x0000000100010fac

@end

