/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PROPlugInManager : NSObject
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedPlugInManager;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)registerAPIObject:(id)arg1 forProtocol:(id)arg2 version:(unsigned)arg3 ;
-(void)scanForPlugInsInBundle:(id)arg1 ;
-(void)setPlugInSearchDirectories:(id)arg1 ;
-(void)scanForPlugIns;
-(id)plugInsForProtocol:(id)arg1 ;
-(id)plugInsForProtocols:(id)arg1 ;
-(void)unregisterAPIForProtocol:(id)arg1 ;
-(void)addPlugInSearchDirectory:(id)arg1 ;
-(BOOL)checkPluginVersionAgainstBlockList:(id)arg1 blockDict:(id)arg2 ;
-(id)plugIns;
-(void)scanForPlugInsInDirectory:(id)arg1 ;
-(BOOL)requiresProtocolsToBePresentWhenLoading;
-(void)setRequiresProtocolsToBePresentWhenLoading:(BOOL)arg1 ;
-(id)plugInSearchDirectories;
-(void)removeAllPlugIns;
-(void)addLibraryBlockedPlugin:(id)arg1 bundleName:(id)arg2 pluginName:(id)arg3 version:(id)arg4 ;
-(void)addDocumentBlockedPlugin:(id)arg1 ;
-(BOOL)checkIfShouldBlockPlugin:(id)arg1 returnPluginDictionary:(id*)arg2 ;
-(void)getNameOverrides:(id)arg1 pluginName:(id*)arg2 bundleName:(id*)arg3 ;
-(void)removeAllBlockedDocumentPlugins;
-(void)scanForPlugInsInBundle:(id)arg1 withPluginKitPlugIn:(id)arg2 ;
-(id)plugInGroups;
-(id)plugInGroupsMutable;
-(id)plugInWithUUID:(CFUUIDRef)arg1 ;
-(id)plugInWithClassName:(id)arg1 ;
-(id)plugInGroupWithUUID:(CFUUIDRef)arg1 ;
-(id)blockedLibraryPlugins;
-(id)blockedDocumentPlugins;
-(void)unregisterAPIForProtocol:(id)arg1 version:(unsigned)arg2 ;
-(id)loadBlockPluginList:(CFStringRef)arg1 ;
@end

