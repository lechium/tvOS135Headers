//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDEngineDatabaseOperation.h"

@class DMFFetchDeclarationsRequest;

@interface DMDEngineFetchDeclarationsOperation : DMDEngineDatabaseOperation
{
    DMFFetchDeclarationsRequest *_request;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010004612c
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) DMFFetchDeclarationsRequest *request; // @synthesize request=_request;
- (void)performDatabaseModificationOperationWithManagedObjectContext:(id)arg1;	// IMP=0x0000000100045914

@end

