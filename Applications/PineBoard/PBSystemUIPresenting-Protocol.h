//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PBSystemOverlayContext, UIViewController;
@protocol PBSystemUIPresentable;

@protocol PBSystemUIPresenting <NSObject>
- (void)invalidateSystemUIAtLevel:(long long)arg1;
- (void)unhideSystemUIAtLevel:(long long)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)hideSystemUIAtLevel:(long long)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)dismissSystemUIAtLevel:(long long)arg1 animated:(_Bool)arg2 transitionBlock:(void (^)(UIViewController *, void (^)(void)))arg3;
- (void)presentSystemUI:(UIViewController<PBSystemUIPresentable> *)arg1 withContext:(PBSystemOverlayContext *)arg2 animated:(_Bool)arg3 transitionBlock:(void (^)(UIViewController *, void (^)(void)))arg4;
@end
