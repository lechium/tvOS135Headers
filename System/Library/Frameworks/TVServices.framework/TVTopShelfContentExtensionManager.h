/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TVTopShelfModernContentExtensionFinder;

@interface TVTopShelfContentExtensionManager : NSObject {

	TVTopShelfModernContentExtensionFinder* _pubicModernExtensionFinder;
	TVTopShelfModernContentExtensionFinder* _privateModernExtensionFinder;

}

@property (nonatomic,retain) TVTopShelfModernContentExtensionFinder * pubicModernExtensionFinder;                //@synthesize pubicModernExtensionFinder=_pubicModernExtensionFinder - In the implementation block
@property (nonatomic,retain) TVTopShelfModernContentExtensionFinder * privateModernExtensionFinder;              //@synthesize privateModernExtensionFinder=_privateModernExtensionFinder - In the implementation block
+(id)sharedInstance;
-(id)_init;
-(BOOL)applicationHasBinaryExtension:(id)arg1 allowModernExtensions:(BOOL)arg2 ;
-(id)topShelfContentExtensionControllerForApplicationBundleIdentifier:(id)arg1 allowModernExtensions:(BOOL)arg2 ;
-(TVTopShelfModernContentExtensionFinder *)privateModernExtensionFinder;
-(TVTopShelfModernContentExtensionFinder *)pubicModernExtensionFinder;
-(id)_legacyExtensionControllerForApplicationBundleIdentifier:(id)arg1 ;
-(BOOL)applicationHasBinaryExtension:(id)arg1 ;
-(id)topShelfContentExtensionControllerForApplicationBundleIdentifier:(id)arg1 ;
-(void)setPubicModernExtensionFinder:(TVTopShelfModernContentExtensionFinder *)arg1 ;
-(void)setPrivateModernExtensionFinder:(TVTopShelfModernContentExtensionFinder *)arg1 ;
@end
