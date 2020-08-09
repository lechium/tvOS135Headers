//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "JSExport-Protocol.h"

@class JSValue, TVHJSAnalyzedImageColors, TVHJSAsynchronousWorkToken, TVHJSMediaEntity;

@protocol TVHJSImageColorAnalyzer <JSExport>
- (TVHJSAnalyzedImageColors *)imageColorsForCachedMediaEntityDefaultImage:(TVHJSMediaEntity *)arg1;
- (TVHJSAsynchronousWorkToken *)imageColorsForMediaEntityDefaultImage:(TVHJSMediaEntity *)arg1:(JSValue *)arg2;
@end

