//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MTResultsController, NSIndexPath;

@protocol MTResultsControllerDelegate <NSObject>
- (void)controller:(MTResultsController *)arg1 didChangeObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(NSIndexPath *)arg5;
- (void)controllerDidChangeContent:(MTResultsController *)arg1;
- (void)controllerWillChangeContent:(MTResultsController *)arg1;
@end

