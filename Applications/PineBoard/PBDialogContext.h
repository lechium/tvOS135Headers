//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PBSystemOverlayUIProvider;

@interface PBDialogContext : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    id <PBSystemOverlayUIProvider> _provider;	// 16 = 0x10
}

+ (id)contextWithViewServiceName:(id)arg1 className:(id)arg2;	// IMP=0x0000000100094080
+ (id)contextWithViewService:(id)arg1;	// IMP=0x0000000100093fe0
+ (id)contextWithViewController:(id)arg1;	// IMP=0x0000000100093d08
- (void).cxx_destruct;	// IMP=0x00000001000941c4
@property(readonly, nonatomic) id <PBSystemOverlayUIProvider> provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_invalidate;	// IMP=0x0000000100094150
- (id)initWithIdentifier:(id)arg1 provider:(id)arg2;	// IMP=0x0000000100093ae4

@end

