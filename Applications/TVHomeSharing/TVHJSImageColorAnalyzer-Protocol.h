//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep  6 2019 11:16:02).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSExport-Protocol.h"

@class JSValue, TVHJSAnalyzedImageColors, TVHJSAsynchronousWorkToken, TVHJSMediaEntity;

@protocol TVHJSImageColorAnalyzer <JSExport>
- (TVHJSAnalyzedImageColors *)imageColorsForCachedMediaEntityDefaultImage:(TVHJSMediaEntity *)arg1;
- (TVHJSAsynchronousWorkToken *)imageColorsForMediaEntityDefaultImage:(TVHJSMediaEntity *)arg1:(JSValue *)arg2;
@end

