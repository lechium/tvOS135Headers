//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLResource-Protocol.h"

@class MTLTextureDescriptor, NSString;
@protocol MTLTexture;

@protocol MTLBuffer <MTLResource>
- (void)removeAllDebugMarkers;
- (void)addDebugMarker:(NSString *)arg1 range:(struct _NSRange)arg2;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 offset:(long long)arg2 bytesPerRow:(long long)arg3;
- (void)didModifyRange:(struct _NSRange)arg1;
- (void *)contents;
@property(nonatomic, readonly) long long length;
@end

