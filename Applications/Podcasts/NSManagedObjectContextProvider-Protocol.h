//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MTManagedObjectContext;

@protocol NSManagedObjectContextProvider <NSObject>
- (MTManagedObjectContext *)storeContext;
- (MTManagedObjectContext *)carPlayContext;
- (MTManagedObjectContext *)resetableImportContext;
- (MTManagedObjectContext *)importContext;
- (MTManagedObjectContext *)privateQueueContext;
- (MTManagedObjectContext *)mainQueueContext;
- (MTManagedObjectContext *)mainOrPrivateContext;
@end

