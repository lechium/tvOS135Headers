/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LSBundleProxy;

@interface _UIActivityBundleHelper : NSObject {

	LSBundleProxy* _bundleProxy;

}

@property (nonatomic,retain) LSBundleProxy * bundleProxy;              //@synthesize bundleProxy=_bundleProxy - In the implementation block
+(id)activityBundleHelperForExtension:(id)arg1 ;
-(id)debugDescription;
-(id)init;
-(id)initWithBundleProxy:(id)arg1 ;
-(void)setBundleProxy:(LSBundleProxy *)arg1 ;
-(LSBundleProxy *)bundleProxy;
-(id)imageForApplicationIconFormat:(int)arg1 activityCategory:(long long)arg2 ;
@end

