/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface TVStyleSheetRegistry : NSObject {

	NSMutableArray* _rootNodes;
	NSMutableDictionary* _nodesByTemplateName;

}

@property (nonatomic,retain) NSMutableArray * rootNodes;                             //@synthesize rootNodes=_rootNodes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nodesByTemplateName;              //@synthesize nodesByTemplateName=_nodesByTemplateName - In the implementation block
+(id)_urlForStyleSheetName:(id)arg1 ;
-(id)init;
-(void)_createDefaultRootNodes;
-(void)commitStyleSheets;
-(void)_commitTemplateTreeNode:(id)arg1 withParentStyleSheetURLs:(id)arg2 ;
-(NSMutableArray *)rootNodes;
-(void)registerStyleSheetURLs:(id)arg1 forTemplateName:(id)arg2 basedOnTemplateName:(id)arg3 ;
-(void)setRootNodes:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)nodesByTemplateName;
-(void)setNodesByTemplateName:(NSMutableDictionary *)arg1 ;
@end

