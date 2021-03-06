/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"

@class NSMutableArray, NSArray;

@interface SBAssistantUserUtterance : SBUnknownSuperclass {
	NSMutableArray *_phrases;	// 4 = 0x4
	NSArray *_originalPhrases;	// 8 = 0x8
	id _correctionIdentifier;	// 12 = 0xc
	BOOL _openToInterpretation;	// 16 = 0x10
}
@property(readonly, retain) NSMutableArray *phrases;	// G=0x191f31; converted property
@property(readonly, retain) NSArray *originalPhrases;	// G=0x191d59; converted property
@property(readonly, retain) id correctionIdentifier;	// G=0x191d49; converted property
@property(readonly, assign) BOOL openToInterpretation;	// G=0x191d69; converted property
+ (id)utteranceWithString:(id)string correctionIdentifier:(id)identifier;	// 0x191e51
- (id)init;	// 0x191db5
- (id)initWithPhrases:(id)phrases correctionIdentifier:(id)identifier;	// 0x19234d
- (id)initWithString:(id)string correctionIdentifier:(id)identifier;	// 0x19229d
- (void)dealloc;	// 0x192229
- (id)description;	// 0x192169
- (id)recursiveDescription;	// 0x191f69
// converted property getter: - (id)phrases;	// 0x191f31
// converted property getter: - (id)correctionIdentifier;	// 0x191d49
// converted property getter: - (id)originalPhrases;	// 0x191d59
// converted property getter: - (BOOL)openToInterpretation;	// 0x191d69
- (id)text;	// 0x191ea1
@end
