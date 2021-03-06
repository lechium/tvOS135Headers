/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class NSURL, NSString, SKNode;

@interface SKReferenceNode : SKNode {

	NSURL* _referenceURL;
	NSString* _referenceFileName;
	SKNode* _resolvedNode;
	BOOL _hasResolvedURL;

}

@property (nonatomic,retain) NSString * referenceFileName; 
@property (nonatomic,retain) NSURL * referenceURL; 
+(BOOL)supportsSecureCoding;
+(id)referenceNodeWithURL:(id)arg1 ;
+(id)referenceNodeWithFileNamed:(id)arg1 ;
+(id)nodeWithFileNamed:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)initWithFileNamed:(id)arg1 ;
-(void)setReferenceURL:(NSURL *)arg1 ;
-(NSURL *)referenceURL;
-(void)setReferenceFileName:(NSString *)arg1 ;
-(NSString *)referenceFileName;
-(void)resolveReferenceNode;
-(void)didLoadReferenceNode:(id)arg1 ;
-(id)_resolveReferenceNode;
-(void)resolveNodeFromArchiveData:(id)arg1 ;
-(id)resolvedNode;
@end

