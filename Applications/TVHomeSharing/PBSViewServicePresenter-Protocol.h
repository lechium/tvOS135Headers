//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSXPCInterface;

@protocol PBSViewServicePresenter <NSObject>
+ (NSXPCInterface *)_exportedInterface;
- (void)viewServiceEndPresentationWithOptions:(NSDictionary *)arg1 completion:(void (^)(void))arg2;
- (void)viewServiceBeginPresentationWithOptions:(NSDictionary *)arg1;

@optional
- (void)viewServiceHandleMessage:(NSDictionary *)arg1 reply:(void (^)(id <NSSecureCoding>, NSError *))arg2;
- (void)viewServiceUpdatePresentationWithOptions:(NSDictionary *)arg1;
- (void)viewServiceBeginPresentationWithOptions:(NSDictionary *)arg1 completion:(void (^)(void))arg2;
@end

