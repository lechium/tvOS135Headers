//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, TVTopShelfImageRequest;

@interface HBTopShelfImageRequest : NSObject
{
    TVTopShelfImageRequest *_topShelfImageRequest;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010007bd0c
@property(readonly, nonatomic) TVTopShelfImageRequest *topShelfImageRequest; // @synthesize topShelfImageRequest=_topShelfImageRequest;
- (_Bool)_imageURLHasExtension:(id)arg1;	// IMP=0x000000010007bc38
- (id)description;	// IMP=0x000000010007bad8
@property(readonly, copy, nonatomic) NSString *imageIdentifier;
@property(readonly, nonatomic) _Bool isArchivedLayeredImageURL;
@property(readonly, nonatomic) _Bool isLayeredImageURL;
@property(readonly, copy, nonatomic) NSURL *URL;
- (id)initWithTopShelfImageRequest:(id)arg1;	// IMP=0x000000010007b990

@end

